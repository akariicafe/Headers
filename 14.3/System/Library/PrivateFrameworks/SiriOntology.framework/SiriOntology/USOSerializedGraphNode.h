@class NSNumber, NSString;

@interface USOSerializedGraphNode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int usoElementId;
@property (retain, nonatomic) NSNumber *usoVerbId;
@property (retain, nonatomic) NSNumber *integerPayload;
@property (retain, nonatomic) NSString *stringPayload;
@property (retain) NSString *entityLabel;
@property (retain) NSString *verbLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUsoElementId:(int)a0;

@end
