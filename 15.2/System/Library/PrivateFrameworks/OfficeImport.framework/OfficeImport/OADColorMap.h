@class NSMutableDictionary;

@interface OADColorMap : NSObject {
    NSMutableDictionary *mMappings;
}

- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)addDefaultMappings:(BOOL)a0;
- (void)addMapping:(int)a0 index:(int)a1;
- (int)mappingForIndex:(int)a0;

@end
