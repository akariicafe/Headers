@class NSNumber;

@interface WFNumberWrapper : NSObject

@property (readonly, nonatomic) NSNumber *number;

+ (id)wrapperWithNumber:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
