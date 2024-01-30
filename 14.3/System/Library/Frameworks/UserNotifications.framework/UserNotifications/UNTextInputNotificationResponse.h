@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse <BSXPCCoding>

@property (readonly, copy, nonatomic) NSString *userText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 targetSceneIdentifier:(id)a4 userText:(id)a5;
+ (BOOL)supportsSecureCoding;
+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 userText:(id)a4;
+ (id)responseWithNotification:(id)a0 actionIdentifier:(id)a1 userText:(id)a2;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 targetSceneIdentifier:(id)a4;
- (id)initWithNotification:(id)a0 actionIdentifier:(id)a1 userText:(id)a2;
- (id)_initWithNotification:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3 targetSceneIdentifier:(id)a4 userText:(id)a5;
- (void)encodeWithCoder:(id)a0;

@end
