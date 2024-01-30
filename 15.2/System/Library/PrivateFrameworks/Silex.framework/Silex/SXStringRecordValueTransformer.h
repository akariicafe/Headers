@class NSString;

@interface SXStringRecordValueTransformer : NSObject <SXDataRecordValueTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformValueForRecord:(id)a0 descriptor:(id)a1;

@end
