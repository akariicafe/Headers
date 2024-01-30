@class NSString;

@interface _INCOptionalLocalExtension : NSObject <INCLocalExtending>

@property (readonly, nonatomic) NSString *localExtensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)handlerForIntent:(id)a0;

@end
