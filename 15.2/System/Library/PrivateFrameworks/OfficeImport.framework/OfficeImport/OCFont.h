@class OCFontSubfamily;

@interface OCFont : NSObject

@property (readonly, nonatomic) OCFontSubfamily *subfamily;
@property (nonatomic) BOOL bold;
@property (nonatomic) BOOL italic;

+ (id)fontWithSubfamily:(id)a0 bold:(BOOL)a1 italic:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithSubfamily:(id)a0 bold:(BOOL)a1 italic:(BOOL)a2;

@end
