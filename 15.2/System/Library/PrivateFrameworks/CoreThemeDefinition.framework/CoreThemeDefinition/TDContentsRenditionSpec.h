@class NSSet;

@interface TDContentsRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) NSSet *contains;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;

@end
