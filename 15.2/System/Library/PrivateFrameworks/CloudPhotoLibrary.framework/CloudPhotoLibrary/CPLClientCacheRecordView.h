@class CPLRecordChange, CPLScopedIdentifier;
@protocol CPLEngineIDMapping;

@interface CPLClientCacheRecordView : CPLRecordView {
    CPLScopedIdentifier *_localScopedIdentifier;
}

@property (readonly, nonatomic) CPLScopedIdentifier *localScopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *cloudRecord;
@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;

- (id)secondaryScopedIdentifier;
- (id)initWithLocalScopedIdentifier:(id)a0 cloudRecord:(id)a1 idMapping:(id)a2;
- (id)relation;
- (id)description;
- (id)synthesizedRecord;
- (void).cxx_destruct;
- (id)recordChangeData;
- (id)scopedIdentifier;
- (BOOL)supportsResources;
- (id)redactedDescription;
- (Class)recordClass;
- (id)relatedScopedIdentifier;

@end
