@class NSString, AVPlayerItem, NSArray, NSDate, NSDictionary;

@interface AVPlayerInterstitialEvent : NSObject {
    AVPlayerItem *_primaryItem;
    struct OpaqueFigPlayerInterstitialEvent { } *_figEvent;
    NSArray *_templateItems;
}

@property (readonly, weak, nonatomic) AVPlayerItem *primaryItem;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSArray *templateItems;
@property (readonly, nonatomic) unsigned long long restrictions;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } resumptionOffset;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } playoutLimit;
@property (readonly, nonatomic) NSDictionary *userDefinedAttributes;

+ (id)interstitialEventWithPrimaryItem:(id)a0 identifier:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 templateItems:(id)a3 restrictions:(unsigned long long)a4 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 userDefinedAttributes:(id)a7;
+ (id)interstitialEventWithPrimaryItem:(id)a0 identifier:(id)a1 date:(id)a2 templateItems:(id)a3 restrictions:(unsigned long long)a4 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 userDefinedAttributes:(id)a7;
+ (id)interstitialEventWithPrimaryItem:(id)a0 templateItems:(id)a1 figEvent:(struct OpaqueFigPlayerInterstitialEvent { } *)a2;

- (id)initWithPrimaryItem:(id)a0 identifier:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 date:(id)a3 templateItems:(id)a4 restrictions:(unsigned long long)a5 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 userDefinedAttributes:(id)a8;
- (struct OpaqueFigPlayerInterstitialEvent { } *)figEvent;
- (id)description;
- (id)initWithPrimaryItemAndFigEvent:(id)a0 templateItems:(id)a1 figEvent:(struct OpaqueFigPlayerInterstitialEvent { } *)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
