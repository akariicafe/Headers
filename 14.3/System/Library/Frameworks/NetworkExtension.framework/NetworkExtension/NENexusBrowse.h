@class NWParameters, NSUUID, NWBrowseDescriptor;

@interface NENexusBrowse : NSObject

@property (retain, nonatomic) NWBrowseDescriptor *descriptor;
@property (retain, nonatomic) NWParameters *parameters;
@property (retain, nonatomic) NSUUID *clientIdentifier;

- (void).cxx_destruct;

@end
