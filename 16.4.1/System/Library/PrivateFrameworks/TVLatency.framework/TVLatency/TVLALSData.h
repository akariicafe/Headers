@class NSNumber, NSArray;

@interface TVLALSData : NSObject

@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *z;
@property (retain, nonatomic) NSNumber *lux;
@property (retain, nonatomic) NSNumber *cct;
@property (retain, nonatomic) NSArray *channelData;

+ (id)instanceFromDictionary:(id)a0;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;

@end
