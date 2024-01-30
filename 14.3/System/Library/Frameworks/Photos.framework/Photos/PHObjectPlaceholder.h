@class NSString;

@interface PHObjectPlaceholder : PHObject {
    NSString *_localIdentifier;
}

@property long long assetMediaType;

- (id)localIdentifier;
- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
