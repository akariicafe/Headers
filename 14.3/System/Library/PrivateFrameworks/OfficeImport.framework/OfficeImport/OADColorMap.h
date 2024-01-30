@class NSMutableDictionary;

@interface OADColorMap : NSObject {
    NSMutableDictionary *mMappings;
}

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)addDefaultMappings:(BOOL)a0;
- (void)addMapping:(int)a0 index:(int)a1;
- (int)mappingForIndex:(int)a0;

@end
