@protocol CLSInvestigationItem;

@interface CLSCurationDebugItem : CLSCurationDebugObject {
    unsigned long long _dedupingType;
    CLSCurationDebugItem *_dedupedDebugItem;
}

@property (retain, nonatomic) id<CLSInvestigationItem> item;

+ (id)stringForDedupingType:(unsigned long long)a0;

- (id)identifier;
- (id)dictionaryRepresentation;
- (id)timestamp;
- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (void)dupeToDebugItem:(id)a0 withDedupingType:(unsigned long long)a1;

@end
