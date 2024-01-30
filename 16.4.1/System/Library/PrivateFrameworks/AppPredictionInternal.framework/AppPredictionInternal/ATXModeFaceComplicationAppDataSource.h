@class NSString;

@interface ATXModeFaceComplicationAppDataSource : NSObject <ATXModeFaceComplicationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;

@end
