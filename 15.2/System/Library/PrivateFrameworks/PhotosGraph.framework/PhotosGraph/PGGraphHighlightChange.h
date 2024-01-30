@class NSString;

@interface PGGraphHighlightChange : PGGraphChange

@property (readonly, nonatomic) NSString *highlightUUID;
@property (readonly, nonatomic) unsigned long long updateTypes;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)mergeChange:(id)a0;
- (id)initWithHighlightUUID:(id)a0 updateTypes:(unsigned long long)a1;

@end
