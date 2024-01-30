@class NSString;

@interface ATXModeFaceLayoutNoComplications : NSObject <ATXModeFaceLayout>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)assignComplicationsFromCandidates:(id)a0 forSuggestedFace:(id)a1;

@end
