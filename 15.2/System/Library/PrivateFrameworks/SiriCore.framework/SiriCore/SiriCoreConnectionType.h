@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (id)description;
- (BOOL)isEdge;
- (long long)technology;
- (BOOL)isWWAN;
- (id)initWithTechnology:(long long)a0;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (unsigned long long)aggregatorConnectionType;

@end
