@interface NetworkQualityExecutionsCustomDelegate : NSObject <NetworkQualityExecutionsDelegate> {
    id /* block */ _responsivenessHandler;
    BOOL _reported;
}

- (void)progress:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponsivenessHandler:(id /* block */)a0;

@end
