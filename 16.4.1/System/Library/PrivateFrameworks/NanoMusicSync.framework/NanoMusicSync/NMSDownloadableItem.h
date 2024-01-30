@class NSNumber, NSString;

@interface NMSDownloadableItem : NSObject

@property (readonly, nonatomic) NSNumber *mediaLibraryIdentifier;
@property (readonly, nonatomic) NSString *externalLibraryIdentifier;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic, getter=isManuallyAdded) BOOL manuallyAdded;
@property (readonly, nonatomic) NSNumber *identifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaLibraryIdentifier:(id)a0 externalLibraryIdentifier:(id)a1 size:(unsigned long long)a2 itemType:(unsigned long long)a3 manuallyAdded:(BOOL)a4;

@end
