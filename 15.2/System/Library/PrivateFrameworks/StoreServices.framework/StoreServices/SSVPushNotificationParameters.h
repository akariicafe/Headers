@class NSString, NSArray, NSDictionary, NSMutableDictionary, NSNumber;

@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_parameterDictionary;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *environmentName;
@property (copy, nonatomic) NSArray *mediaKinds;
@property (copy, nonatomic) NSString *notificationType;
@property (copy, nonatomic) NSDictionary *putParameters;
@property (nonatomic) long long requestType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_copyParametersDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forParameter:(id)a1;
- (id)valueForParameter:(id)a0;

@end
