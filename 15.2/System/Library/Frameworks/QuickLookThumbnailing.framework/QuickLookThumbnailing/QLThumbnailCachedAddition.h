@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {
    unsigned long long _fileID;
}

@property (retain) GSAddition *addition;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAddition:(id)a0;
- (BOOL)isStillValid;

@end
