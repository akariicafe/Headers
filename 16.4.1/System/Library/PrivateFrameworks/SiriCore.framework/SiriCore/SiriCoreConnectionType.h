@interface SiriCoreConnectionType : NSObject {
    long long _technology;
}

- (long long)technology;
- (id)description;
- (BOOL)isEdge;
- (unsigned long long)aggregatorConnectionType;
- (BOOL)canUseWiFiDirectly;
- (long long)diagnosticConnectionType;
- (id)initWithTechnology:(long long)a0;
- (BOOL)isWWAN;

@end
