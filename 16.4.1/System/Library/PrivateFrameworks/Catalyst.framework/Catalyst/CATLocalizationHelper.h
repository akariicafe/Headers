@class NSLock, NSBundle, NSMutableDictionary;

@interface CATLocalizationHelper : NSObject {
    NSMutableDictionary *mStringByKeyByTableName;
    NSLock *mLock;
}

@property (readonly, weak, nonatomic) NSBundle *bundle;

+ (id)helperForBundle:(id)a0;

- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (id)stringByKeyForTableName:(id)a0;
- (id)stringsForKey:(id)a0 value:(id)a1 table:(id)a2;

@end
