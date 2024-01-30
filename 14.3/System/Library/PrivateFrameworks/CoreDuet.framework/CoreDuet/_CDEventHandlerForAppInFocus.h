@class NSString, _CDFileUtility, _CDDataCollectionAnonymizer;

@interface _CDEventHandlerForAppInFocus : NSObject <_CDEventHandlerDelegate>

@property (retain, nonatomic) _CDDataCollectionAnonymizer *anonymizer;
@property (retain, nonatomic) _CDFileUtility *utility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)eventHandler:(id)a0 withFileHandle:(id)a1;

@end
