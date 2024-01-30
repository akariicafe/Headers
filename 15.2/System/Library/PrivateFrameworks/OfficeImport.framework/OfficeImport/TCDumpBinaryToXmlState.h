@class NSString, NSMutableDictionary;

@interface TCDumpBinaryToXmlState : NSObject {
    NSString *mCurrentFieldName;
    NSMutableDictionary *mFieldNameToValueMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)setCurrentField:(id)a0;
- (void)cacheValueforCurrentField:(id)a0;
- (id)valueForCurrentField;
- (id)valueForField:(id)a0;

@end
