@class NSURL, NSString, NSDictionary;

@interface ADAdServerManifestRecord : NSObject

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL temporary;
@property (nonatomic) double lastUpdate;
@property (retain, nonatomic) NSDictionary *manifest;
@property (nonatomic) BOOL updateInProgress;

- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;

@end
