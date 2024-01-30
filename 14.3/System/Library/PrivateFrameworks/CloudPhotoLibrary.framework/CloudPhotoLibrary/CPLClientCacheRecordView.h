@class CPLRecordChange, CPLScopedIdentifier;
@protocol CPLEngineIDMapping;

@interface CPLClientCacheRecordView : CPLRecordView {
    CPLScopedIdentifier *_localScopedIdentifier;
}

@property (readonly, nonatomic) CPLScopedIdentifier *localScopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *cloudRecord;
@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;

- (id)scopedIdentifier;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)supportsResources;
- (id)relation;
- (id)description;
- (Class)recordClass;
- (id)synthesizedRecord;
- (id)relatedScopedIdentifier;
- (id)secondaryScopedIdentifier;
- (id)initWithLocalScopedIdentifier:(id)a0 cloudRecord:(id)a1 idMapping:(id)a2;

@end
