@class NSString, NSMutableDictionary;

@interface TCDumpBinaryToXmlState : NSObject {
    NSString *mCurrentFieldName;
    NSMutableDictionary *mFieldNameToValueMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)setCurrentField:(id)a0;
- (void)cacheValueforCurrentField:(id)a0;
- (id)valueForCurrentField;
- (id)valueForField:(id)a0;

@end
