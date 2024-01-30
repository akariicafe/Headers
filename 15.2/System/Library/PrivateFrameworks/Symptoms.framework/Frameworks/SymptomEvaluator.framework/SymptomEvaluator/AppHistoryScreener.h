@class NSMapTable;

@interface AppHistoryScreener : NSObject {
    NSMapTable *episodes;
}

+ (id)_sharedInstance;
+ (id)description;
+ (id)fetchEpisodeFor:(id)a0 inbound:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)_fetchEpisodeFor:(id)a0 inbound:(BOOL)a1;
- (void)_makeLabelWith:(id)a0 inbound:(BOOL)a1 fullLabel:(id *)a2 exportLabel:(id *)a3;

@end
