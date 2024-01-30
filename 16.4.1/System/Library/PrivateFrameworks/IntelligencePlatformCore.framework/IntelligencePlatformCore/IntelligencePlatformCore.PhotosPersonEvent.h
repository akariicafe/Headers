@interface IntelligencePlatformCore.PhotosPersonEvent : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ photosPerson;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
