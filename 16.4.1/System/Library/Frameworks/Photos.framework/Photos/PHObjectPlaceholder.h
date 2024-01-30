@class NSString;

@interface PHObjectPlaceholder : PHObject {
    NSString *_localIdentifier;
}

@property long long assetMediaType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)localIdentifier;
- (id)initWithLocalIdentifier:(id)a0;

@end
