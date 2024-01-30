@class NSArray, NSUUID, NSString;

@interface CARConnectionSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) NSString *transportType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)allEventsOfTypes:(id)a0;
- (id)initWithEvents:(id)a0 sessionIdentifier:(id)a1 transportType:(id)a2;

@end
