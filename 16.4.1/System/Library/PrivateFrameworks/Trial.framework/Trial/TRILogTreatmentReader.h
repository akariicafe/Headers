@class NSString;
@protocol TRIPaths;

@interface TRILogTreatmentReader : NSObject {
    int _projectId;
    id<TRIPaths> _paths;
}

@property (readonly) NSString *path;

+ (id)readerWithProjectId:(int)a0 paths:(id)a1;

- (id)treatments;
- (id)namespaceLoggingTreatmentPath;
- (id)fetchRolloutLogNamespaces;
- (id)initWithProjectId:(int)a0 paths:(id)a1;
- (void).cxx_destruct;

@end
