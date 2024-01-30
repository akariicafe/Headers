@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (BOOL)isEdge;
- (id)description;
- (BOOL)isWWAN;
- (long long)technology;
- (id)initWithTechnology:(long long)a0;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (unsigned long long)aggregatorConnectionType;

@end
