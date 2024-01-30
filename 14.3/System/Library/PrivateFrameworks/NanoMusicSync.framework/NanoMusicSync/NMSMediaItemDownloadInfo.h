@class NSNumber;

@interface NMSMediaItemDownloadInfo : NSObject

@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic, getter=isManuallyAdded) BOOL manuallyAdded;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 size:(unsigned long long)a1 manuallyAdded:(BOOL)a2;

@end
