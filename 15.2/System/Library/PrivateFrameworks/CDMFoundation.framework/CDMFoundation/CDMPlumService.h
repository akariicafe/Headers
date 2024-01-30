@class UPPLNerHandler;

@interface CDMPlumService : CDMDAGBaseService {
    UPPLNerHandler *_plumHandler;
}

+ (id)assetFolderName;
+ (id)trialFactorName;

- (BOOL)isEnabled;
- (id)handle:(id)a0;
- (void).cxx_destruct;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;

@end
