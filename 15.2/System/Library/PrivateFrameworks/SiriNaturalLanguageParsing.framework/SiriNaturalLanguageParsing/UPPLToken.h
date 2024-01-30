@class NSString, NSArray;

@interface UPPLToken : NSObject

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) unsigned long long tokenId;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } charIndicesRange;
@property (readonly, nonatomic) NSArray *graphemeClusters;
@property (readonly, nonatomic) BOOL isSpecialToken;
@property (readonly, nonatomic) BOOL isWordPiece;
@property (readonly, nonatomic) BOOL isOverflow;
@property (readonly, nonatomic) NSArray *encodedLabels;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithToken:(id)a0 tokenId:(unsigned long long)a1 charIndicesRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 graphemeClusters:(id)a3;
- (id)initWithToken:(id)a0 tokenId:(unsigned long long)a1 charIndicesRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 graphemeClusters:(id)a3 isSpecialToken:(BOOL)a4 isWordPiece:(BOOL)a5 isOverflow:(BOOL)a6 encodedLabels:(id)a7;

@end
