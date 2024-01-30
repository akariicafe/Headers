@protocol FSFFeatureStoreStream;

@interface FSFCurareInteractionStream : NSObject {
    id<FSFFeatureStoreStream> _biomeStream;
}

+ (id)getWithStreamId:(id)a0;
+ (BOOL)createError:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithStreamId:(id)a0;
- (BOOL)insert:(id)a0 error:(id *)a1;
- (id)retrieve:(id)a0;

@end
