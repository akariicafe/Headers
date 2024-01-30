@class NSString;

@interface SportsKit.SportingEvent : NSObject {
    void /* unknown type, empty encoding */ canonicalId;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ progressStatus;
    void /* unknown type, empty encoding */ competitors;
    void /* unknown type, empty encoding */ clock;
    void /* unknown type, empty encoding */ plays;
    void /* unknown type, empty encoding */ coverage;
    void /* unknown type, empty encoding */ tournament;
}

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
