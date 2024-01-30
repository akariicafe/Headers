@class NSIndexSet, BRCProgress, BRCServerZone;

@interface BRCDownloadContent : BRCDownload {
    BRCServerZone *_zone;
    BOOL _isFinderBookmark;
}

@property (readonly, nonatomic) BOOL liveItemIsPackage;
@property (readonly, nonatomic) unsigned int liveDocumentID;
@property (readonly, nonatomic) unsigned long long liveFileID;
@property (readonly, nonatomic) NSIndexSet *desiredIndices;
@property (readonly, nonatomic) BOOL requiresTwoPhase;
@property (retain, nonatomic) BRCProgress *progress;

- (int)kind;
- (void).cxx_destruct;
- (void)setProgress:(id)a0;
- (id)description;
- (id)initWithDocument:(id)a0 stageID:(id)a1;
- (BOOL)_stageWithSession:(id)a0 error:(id *)a1;
- (BOOL)_prepareSecondStageWithSession:(id)a0 manifest:(id)a1 package:(id)a2 error:(id *)a3;
- (BOOL)_stageWithSession:(id)a0 manifest:(id)a1 package:(id)a2 xattrsPackage:(id)a3 error:(id *)a4;

@end
