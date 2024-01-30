@class NSString;

@interface PHObjectPlaceholder : PHObject {
    NSString *_localIdentifier;
}

@property long long assetMediaType;

- (id)initWithLocalIdentifier:(id)a0;
- (id)localIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
