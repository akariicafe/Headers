@class NSData, NSString, NSArray;

@interface WFUIRUserEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *screenCaptureData;
@property (readonly, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *userDescription;
@property (readonly, nonatomic) NSString *localizedActionName;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) NSArray *uiEvents;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedRepresentation;
- (void).cxx_destruct;

@end
