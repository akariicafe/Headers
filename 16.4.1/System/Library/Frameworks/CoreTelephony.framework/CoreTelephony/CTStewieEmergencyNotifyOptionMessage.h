@class NSString;

@interface CTStewieEmergencyNotifyOptionMessage : NSObject <CTStewieMessageOutgoing>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long notifyOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithNotifyOption:(long long)a0 error:(id *)a1;
- (BOOL)isEqualToEmergencyUpdateNotifyOptionMessage:(id)a0;

@end
