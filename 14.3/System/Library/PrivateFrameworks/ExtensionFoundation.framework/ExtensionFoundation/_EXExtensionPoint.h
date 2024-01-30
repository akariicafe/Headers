@class NSString, NSDictionary;

@interface _EXExtensionPoint : NSObject <EXExtensionPoint, NSCopying>

@property (retain) NSString *identifier;
@property (retain) NSDictionary *SDKDictionary;
@property unsigned int platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
