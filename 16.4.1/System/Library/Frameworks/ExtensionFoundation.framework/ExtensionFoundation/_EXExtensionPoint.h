@class NSString, NSDictionary, NSURL;

@interface _EXExtensionPoint : NSObject <EXExtensionPoint, NSCopying>

@property (retain) NSString *identifier;
@property (retain) NSDictionary *SDKDictionary;
@property unsigned int platform;
@property unsigned long long variant;
@property (retain) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
