@class NSString, NSArray;

@interface APPCContentDepiction : NSObject <APPCPromotableContentDepiction> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ language;
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ searchTerms;
    void /* unknown type, empty encoding */ keywords;
    void /* unknown type, empty encoding */ categories;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ adjacentPosition;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ placement;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSArray *searchTerms;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSArray *categories;

- (id)initWithIdentifier:(id)a0 placement:(long long)a1 language:(id)a2 locale:(id)a3 searchTerms:(id)a4 keywords:(id)a5 categories:(id)a6;
- (id)initWithIdentifier:(id)a0 adjacentPosition:(unsigned long long)a1 placement:(long long)a2 language:(id)a3 locale:(id)a4 searchTerms:(id)a5 keywords:(id)a6 categories:(id)a7;
- (id)init;
- (void).cxx_destruct;

@end
