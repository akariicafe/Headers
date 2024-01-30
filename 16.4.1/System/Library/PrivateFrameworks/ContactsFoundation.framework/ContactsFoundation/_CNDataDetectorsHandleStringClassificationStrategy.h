@class NSString;

@interface _CNDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assistedDataDetectorsStrategy;
+ (id)dataDetectorsStrategy;

- (unsigned long long)classificationOfHandleString:(id)a0;

@end
