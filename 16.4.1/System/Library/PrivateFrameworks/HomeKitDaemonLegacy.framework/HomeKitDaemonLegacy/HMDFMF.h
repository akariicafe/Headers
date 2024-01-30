@class NSNumber;

@interface HMDFMF : NSObject

@property (readonly, nonatomic) NSNumber *number;
@property (readonly, nonatomic) unsigned long long value;

+ (id)fmfStatusWithCoder:(id)a0;
+ (id)fmfStatusWithDict:(id)a0;
+ (id)fmfStatusWithMessage:(id)a0;
+ (id)fmfStatusWithNumber:(id)a0;
+ (id)fmfStatusWithValue:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithNumber:(id)a0;
- (void)addToCoder:(id)a0;
- (void)addToPayload:(id)a0;

@end
