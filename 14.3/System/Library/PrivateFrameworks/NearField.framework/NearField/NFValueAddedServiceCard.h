@class NSData;

@interface NFValueAddedServiceCard : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *identifier;
@property BOOL userInterventionRequired;
@property int type;
@property (retain) NSData *token;
@property (retain) NSData *data;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
