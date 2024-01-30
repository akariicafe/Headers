@class NSString, NSError;

@interface SURollbackSuggestionProcessInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *processID;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSError *rollbackSuggestionError;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)initWithProcessID:(id)a0;

@end
