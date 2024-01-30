@class NSObject;
@protocol NSSecureCoding;

@interface CVATimedValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (retain, nonatomic) NSObject<NSSecureCoding> *value;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;

@end
