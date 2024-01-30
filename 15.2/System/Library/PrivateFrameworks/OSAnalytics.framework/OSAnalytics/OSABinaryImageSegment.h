@class OSASymbolInfo;

@interface OSABinaryImageSegment : NSObject

@property int source;
@property unsigned long long used_index;
@property (readonly, nonatomic) OSASymbolInfo *symbolInfo;

- (id)initWithAddress:(unsigned long long)a0 size:(unsigned long long)a1 for:(unsigned char[16])a2;
- (id)initWithSymbol:(id)a0;
- (id)details;
- (void).cxx_destruct;
- (id)full_details;

@end
