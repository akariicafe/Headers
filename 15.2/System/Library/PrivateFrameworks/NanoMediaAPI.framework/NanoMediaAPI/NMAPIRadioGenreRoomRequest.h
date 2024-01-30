@class NSURL;

@interface NMAPIRadioGenreRoomRequest : NMAPIRequest

@property (copy, nonatomic) NSURL *URL;

- (id)initWithURL:(id)a0;
- (id)urlComponentsWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_bagRoomURLRegularExpressionWithStoreBagDictionary:(id)a0;
- (id)_roomIdentifierWithStoreBagDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseParserClass;

@end
